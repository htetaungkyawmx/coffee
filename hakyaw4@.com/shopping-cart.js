function showPaymentTable() {
    document.getElementById('PaymentTable').style.display = "block";
}

function hidePaymentTable() {
    document.getElementById('PaymentTable').style.display = "none";
}

function successAlert() {
    alert("Successful Order!");
}

// Hide payment details by default if 'Cash on Delivery' is selected
document.addEventListener("DOMContentLoaded", function () {
    hidePaymentTable();
});
