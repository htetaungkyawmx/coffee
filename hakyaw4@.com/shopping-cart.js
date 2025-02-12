function showPaymentTable() {
    document.getElementById("PaymentTable").style.display = "block";
}

function hidePaymentTable() {
    document.getElementById("PaymentTable").style.display = "none";
}

// Success alert when clicking checkout
function successAlert() {
    alert("Your order has been successfully placed!");
}

// Handle payment option selection
document.addEventListener("DOMContentLoaded", function () {
    hidePaymentTable(); // Hide payment table initially

    const paymentOptions = document.querySelectorAll("input[name='rdoPaymentType']");
    paymentOptions.forEach(option => {
        option.addEventListener("change", function () {
            if (this.value === "MPU" || this.value === "VISA") {
                showPaymentTable();
            } else {
                hidePaymentTable();
            }
        });
    });
});
